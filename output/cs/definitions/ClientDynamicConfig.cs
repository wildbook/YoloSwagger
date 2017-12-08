using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ClientDynamicConfig
    {
        [DataMember(Name = "configs")]
        string Configs { get; set; }

        [DataMember(Name = "compressed")]
        bool Compressed { get; set; }

        [DataMember(Name = "delta")]
        bool Delta { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClientDynamicConfig {\n");
            sb.Append("  Configs: ").Append(Configs).Append("\n");
            sb.Append("  Compressed: ").Append(Compressed).Append("\n");
            sb.Append("  Delta: ").Append(Delta).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}