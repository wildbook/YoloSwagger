using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameflowGameflowGameClient
    {
        [DataMember(Name = "observerServerIp")]
        public string ObserverServerIp { get; set; }

        [DataMember(Name = "observerServerPort")]
        public ushort ObserverServerPort { get; set; }

        [DataMember(Name = "running")]
        public bool Running { get; set; }

        [DataMember(Name = "serverIp")]
        public string ServerIp { get; set; }

        [DataMember(Name = "serverPort")]
        public ushort ServerPort { get; set; }

        [DataMember(Name = "visible")]
        public bool Visible { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowGameflowGameClient {\n");
            sb.Append("  ObserverServerIp: ").Append(ObserverServerIp).Append("\n");
            sb.Append("  ObserverServerPort: ").Append(ObserverServerPort).Append("\n");
            sb.Append("  Running: ").Append(Running).Append("\n");
            sb.Append("  ServerIp: ").Append(ServerIp).Append("\n");
            sb.Append("  ServerPort: ").Append(ServerPort).Append("\n");
            sb.Append("  Visible: ").Append(Visible).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}