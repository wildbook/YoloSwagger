using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClientDynamicConfig
    {
        [DataMember(Name = "compressed")]
        public bool Compressed { get; set; }

        [DataMember(Name = "configs")]
        public string Configs { get; set; }

        [DataMember(Name = "delta")]
        public bool Delta { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClientDynamicConfig {\n");
            sb.Append("  Compressed: ").Append(Compressed).Append("\n");
            sb.Append("  Configs: ").Append(Configs).Append("\n");
            sb.Append("  Delta: ").Append(Delta).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}