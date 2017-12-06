using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PluginDescriptionResource
    {
        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "pluginDependencies")]
        Dictionary<string, string> PluginDependencies { get; set; }

        [DataMember(Name = "riotMeta")]
        PluginMetadataResource RiotMeta { get; set; }

        [DataMember(Name = "version")]
        string Version { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PluginDescriptionResource {\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  PluginDependencies: ").Append(PluginDependencies).Append("\n");
            sb.Append("  RiotMeta: ").Append(RiotMeta).Append("\n");
            sb.Append("  Version: ").Append(Version).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}