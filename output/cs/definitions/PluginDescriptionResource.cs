using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PluginDescriptionResource
    {
        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "pluginDependencies")]
        public Dictionary<string, string> PluginDependencies { get; set; }

        [DataMember(Name = "riotMeta")]
        public PluginMetadataResource RiotMeta { get; set; }

        [DataMember(Name = "version")]
        public string Version { get; set; }

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