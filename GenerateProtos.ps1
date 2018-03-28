$protoExetDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$ptotoRawDir = Join-Path -Path $protoExetDir -ChildPath Protos
$dotNetProtoDir = Join-Path -Path $protoExetDir -ChildPath Protobuf.NET
$cppProtoDir = Join-Path -Path $protoExetDir -ChildPath Protobuf.CPP
$jsProtoDir = Join-Path -Path $protoExetDir -ChildPath Protobuf.JS

.\protoc.exe $ptotoRawDir\SeverSocketMessages.proto --proto_path=$protoExetDir --csharp_out=$dotNetProtoDir --cpp_out=$cppProtoDir --js_out=$jsProtoDir
.\protoc.exe $ptotoRawDir\ClientSocketMessages.proto --proto_path=$protoExetDir --csharp_out=$dotNetProtoDir --cpp_out=$cppProtoDir --js_out=$jsProtoDir


Write-Host "Press any key to continue ..."

$x = $host.UI.RawUI.ReadKey("NoEcho,IncludeKeyDown")