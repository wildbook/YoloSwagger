using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGeoinfoWhereAmIRequest
    {
        [DataMember(Name = "ipAddress")]
        public string IpAddress { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGeoinfoWhereAmIRequest {\n");
            sb.Append("  IpAddress: ").Append(IpAddress).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}