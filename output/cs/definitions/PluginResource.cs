using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PluginResource
    {
        [DataMember(Name = "app")]
        public string App { get; set; }

        [DataMember(Name = "assetBundleNames")]
        public string[] AssetBundleNames { get; set; }

        [DataMember(Name = "dependencies")]
        public PluginResourceContract[] Dependencies { get; set; }

        [DataMember(Name = "dynLibFileName")]
        public string DynLibFileName { get; set; }

        [DataMember(Name = "dynLibPath")]
        public string DynLibPath { get; set; }

        [DataMember(Name = "externalUri")]
        public string ExternalUri { get; set; }

        [DataMember(Name = "feature")]
        public string Feature { get; set; }

        [DataMember(Name = "fullName")]
        public string FullName { get; set; }

        [DataMember(Name = "implementedContracts")]
        public PluginResourceContract[] ImplementedContracts { get; set; }

        [DataMember(Name = "isDynamicLibraryInited")]
        public bool IsDynamicLibraryInited { get; set; }

        [DataMember(Name = "isDynamicLibraryLoaded")]
        public bool IsDynamicLibraryLoaded { get; set; }

        [DataMember(Name = "mountedAssetBundles")]
        public Dictionary<string, string> MountedAssetBundles { get; set; }

        [DataMember(Name = "orderDynamicLibraryInited")]
        public int OrderDynamicLibraryInited { get; set; }

        [DataMember(Name = "orderDynamicLibraryLoaded")]
        public int OrderDynamicLibraryLoaded { get; set; }

        [DataMember(Name = "orderWADFileMounted")]
        public int OrderWADFileMounted { get; set; }

        [DataMember(Name = "pluginInfoApiSemVer")]
        public string PluginInfoApiSemVer { get; set; }

        [DataMember(Name = "shortName")]
        public string ShortName { get; set; }

        [DataMember(Name = "standalone")]
        public bool Standalone { get; set; }

        [DataMember(Name = "subtype")]
        public string Subtype { get; set; }

        [DataMember(Name = "supertype")]
        public string Supertype { get; set; }

        [DataMember(Name = "threadingModel")]
        public string ThreadingModel { get; set; }

        [DataMember(Name = "version")]
        public string Version { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PluginResource {\n");
            sb.Append("  App: ").Append(App).Append("\n");
            sb.Append("  AssetBundleNames: ").Append(AssetBundleNames).Append("\n");
            sb.Append("  Dependencies: ").Append(Dependencies).Append("\n");
            sb.Append("  DynLibFileName: ").Append(DynLibFileName).Append("\n");
            sb.Append("  DynLibPath: ").Append(DynLibPath).Append("\n");
            sb.Append("  ExternalUri: ").Append(ExternalUri).Append("\n");
            sb.Append("  Feature: ").Append(Feature).Append("\n");
            sb.Append("  FullName: ").Append(FullName).Append("\n");
            sb.Append("  ImplementedContracts: ").Append(ImplementedContracts).Append("\n");
            sb.Append("  IsDynamicLibraryInited: ").Append(IsDynamicLibraryInited).Append("\n");
            sb.Append("  IsDynamicLibraryLoaded: ").Append(IsDynamicLibraryLoaded).Append("\n");
            sb.Append("  MountedAssetBundles: ").Append(MountedAssetBundles).Append("\n");
            sb.Append("  OrderDynamicLibraryInited: ").Append(OrderDynamicLibraryInited).Append("\n");
            sb.Append("  OrderDynamicLibraryLoaded: ").Append(OrderDynamicLibraryLoaded).Append("\n");
            sb.Append("  OrderWADFileMounted: ").Append(OrderWADFileMounted).Append("\n");
            sb.Append("  PluginInfoApiSemVer: ").Append(PluginInfoApiSemVer).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("  Standalone: ").Append(Standalone).Append("\n");
            sb.Append("  Subtype: ").Append(Subtype).Append("\n");
            sb.Append("  Supertype: ").Append(Supertype).Append("\n");
            sb.Append("  ThreadingModel: ").Append(ThreadingModel).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}