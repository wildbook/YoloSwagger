using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct PluginMetadataResource {
    [DataMember(Name = "implements")]
    Dictionary<string, string> Implements {get; set;}

    [DataMember(Name = "hasBundledAssets")]
    bool HasBundledAssets {get; set;}

    [DataMember(Name = "perLocaleAssetBundles")]
    Dictionary<string, dynamic> PerLocaleAssetBundles {get; set;}

    [DataMember(Name = "app")]
    string App {get; set;}

    [DataMember(Name = "feature")]
    string Feature {get; set;}

    [DataMember(Name = "subtype")]
    string Subtype {get; set;}

    [DataMember(Name = "threading")]
    PluginThreadingModel Threading {get; set;}

    [DataMember(Name = "globalAssetBundles")]
    string[] GlobalAssetBundles {get; set;}

    [DataMember(Name = "type")]
    string Type {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class PluginMetadataResource {\n");
      sb.Append("  Implements: ").Append(Implements).Append("\n");
      sb.Append("  HasBundledAssets: ").Append(HasBundledAssets).Append("\n");
      sb.Append("  PerLocaleAssetBundles: ").Append(PerLocaleAssetBundles).Append("\n");
      sb.Append("  App: ").Append(App).Append("\n");
      sb.Append("  Feature: ").Append(Feature).Append("\n");
      sb.Append("  Subtype: ").Append(Subtype).Append("\n");
      sb.Append("  Threading: ").Append(Threading).Append("\n");
      sb.Append("  GlobalAssetBundles: ").Append(GlobalAssetBundles).Append("\n");
      sb.Append("  Type: ").Append(Type).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}