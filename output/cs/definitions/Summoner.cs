using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct Summoner
    {
        [DataMember(Name = "acctId")]
        public ulong AcctId { get; set; }

        [DataMember(Name = "sumId")]
        public ulong SumId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Summoner {\n");
            sb.Append("  AcctId: ").Append(AcctId).Append("\n");
            sb.Append("  SumId: ").Append(SumId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}