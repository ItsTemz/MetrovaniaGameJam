

powershell -command "& { (Get-ItemProperty 'Registry::HKEY_LOCAL_MACHINE\SOFTWARE\EpicGames\Unreal Engine\5.0' -Name 'InstalledDirectory' ).'InstalledDirectory' }" > gen_temp.engine_emp
set /p gen_bin=<gen_temp.engine_emp
set project_folder=%cd%
FOR %%A IN (%*) DO (
   FOR /f "tokens=1,2 delims=:" %%G IN ("%%A") DO set %%G=%%H
)
set build_cmd=%gen_bin%\Engine\Build\BatchFiles\Build.bat %PROJECT%%PROJ_ADDON% Win64 %MODE% -Project="%project_folder%\%PROJECT%.uproject" -WaitMutex -FromMsBuild -NoHotReload

echo ---------------------------------------------------------
echo Egine Folder: %gen_bin%
echo Project Folder: %project_folder%
echo -------------------  BUILD  -----------------------------
echo %build_cmd%
echo ---------------------------------------------------------
call %build_cmd%
echo ---------------------------------------------------------
PAUSE