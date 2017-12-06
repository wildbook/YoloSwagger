using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RecofrienderNetworkConfig
    {
        [DataMember(Name = "enabled")]
        bool Enabled { get; set; }

        [DataMember(Name = "linkUrlTemplate")]
        string LinkUrlTemplate { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "unlinkUrlTemplate")]
        string UnlinkUrlTemplate { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RecofrienderNetworkConfig {\n");
            sb.Append("  Enabled: ").Append(Enabled).Append("\n");
            sb.Append("  LinkUrlTemplate: ").Append(LinkUrlTemplate).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  UnlinkUrlTemplate: ").Append(UnlinkUrlTemplate).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}