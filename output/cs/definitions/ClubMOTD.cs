using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClubMOTD
    {
        [DataMember(Name = "motd")]
        public string Motd { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClubMOTD {\n");
            sb.Append("  Motd: ").Append(Motd).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}