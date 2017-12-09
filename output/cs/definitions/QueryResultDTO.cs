using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct QueryResultDTO
    {
        [DataMember(Name = "lastUpdate")]
        public long LastUpdate { get; set; }

        [DataMember(Name = "queryToLootNames")]
        public dynamic QueryToLootNames { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class QueryResultDTO {\n");
            sb.Append("  LastUpdate: ").Append(LastUpdate).Append("\n");
            sb.Append("  QueryToLootNames: ").Append(QueryToLootNames).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}