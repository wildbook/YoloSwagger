using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PluginResource
    {
        [DataMember(Name = "orderDynamicLibraryInited")]
        int OrderDynamicLibraryInited { get; set; }

        [DataMember(Name = "isDynamicLibraryLoaded")]
        bool IsDynamicLibraryLoaded { get; set; }

        [DataMember(Name = "app")]
        string App { get; set; }

        [DataMember(Name = "dynLibFileName")]
        string DynLibFileName { get; set; }

        [DataMember(Name = "supertype")]
        string Supertype { get; set; }

        [DataMember(Name = "pluginInfoApiSemVer")]
        string PluginInfoApiSemVer { get; set; }

        [DataMember(Name = "isDynamicLibraryInited")]
        bool IsDynamicLibraryInited { get; set; }

        [DataMember(Name = "fullName")]
        string FullName { get; set; }

        [DataMember(Name = "feature")]
        string Feature { get; set; }

        [DataMember(Name = "orderWADFileMounted")]
        int OrderWADFileMounted { get; set; }

        [DataMember(Name = "version")]
        string Version { get; set; }

        [DataMember(Name = "threadingModel")]
        string ThreadingModel { get; set; }

        [DataMember(Name = "orderDynamicLibraryLoaded")]
        int OrderDynamicLibraryLoaded { get; set; }

        [DataMember(Name = "externalUri")]
        string ExternalUri { get; set; }

        [DataMember(Name = "implementedContracts")]
        PluginResourceContract[] ImplementedContracts { get; set; }

        [DataMember(Name = "mountedAssetBundles")]
        Dictionary<string, string> MountedAssetBundles { get; set; }

        [DataMember(Name = "dependencies")]
        PluginResourceContract[] Dependencies { get; set; }

        [DataMember(Name = "shortName")]
        string ShortName { get; set; }

        [DataMember(Name = "standalone")]
        bool Standalone { get; set; }

        [DataMember(Name = "assetBundleNames")]
        string[] AssetBundleNames { get; set; }

        [DataMember(Name = "subtype")]
        string Subtype { get; set; }

        [DataMember(Name = "dynLibPath")]
        string DynLibPath { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PluginResource {\n");
            sb.Append("  OrderDynamicLibraryInited: ").Append(OrderDynamicLibraryInited).Append("\n");
            sb.Append("  IsDynamicLibraryLoaded: ").Append(IsDynamicLibraryLoaded).Append("\n");
            sb.Append("  App: ").Append(App).Append("\n");
            sb.Append("  DynLibFileName: ").Append(DynLibFileName).Append("\n");
            sb.Append("  Supertype: ").Append(Supertype).Append("\n");
            sb.Append("  PluginInfoApiSemVer: ").Append(PluginInfoApiSemVer).Append("\n");
            sb.Append("  IsDynamicLibraryInited: ").Append(IsDynamicLibraryInited).Append("\n");
            sb.Append("  FullName: ").Append(FullName).Append("\n");
            sb.Append("  Feature: ").Append(Feature).Append("\n");
            sb.Append("  OrderWADFileMounted: ").Append(OrderWADFileMounted).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("  ThreadingModel: ").Append(ThreadingModel).Append("\n");
            sb.Append("  OrderDynamicLibraryLoaded: ").Append(OrderDynamicLibraryLoaded).Append("\n");
            sb.Append("  ExternalUri: ").Append(ExternalUri).Append("\n");
            sb.Append("  ImplementedContracts: ").Append(ImplementedContracts).Append("\n");
            sb.Append("  MountedAssetBundles: ").Append(MountedAssetBundles).Append("\n");
            sb.Append("  Dependencies: ").Append(Dependencies).Append("\n");
            sb.Append("  ShortName: ").Append(ShortName).Append("\n");
            sb.Append("  Standalone: ").Append(Standalone).Append("\n");
            sb.Append("  AssetBundleNames: ").Append(AssetBundleNames).Append("\n");
            sb.Append("  Subtype: ").Append(Subtype).Append("\n");
            sb.Append("  DynLibPath: ").Append(DynLibPath).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}