using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LobbyClientDynamicConfigurationNotification
    {
        [DataMember(Name = "configs")]
        public string Configs { get; set; }

        [DataMember(Name = "delta")]
        public bool Delta { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LobbyClientDynamicConfigurationNotification {\n");
            sb.Append("  Configs: ").Append(Configs).Append("\n");
            sb.Append("  Delta: ").Append(Delta).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}