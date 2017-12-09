using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RecofrienderContactPaginationResource
    {
        [DataMember(Name = "cached")]
        public ulong Cached { get; set; }

        [DataMember(Name = "count")]
        public ulong Count { get; set; }

        [DataMember(Name = "limit")]
        public ulong Limit { get; set; }

        [DataMember(Name = "more")]
        public bool More { get; set; }

        [DataMember(Name = "start")]
        public ulong Start { get; set; }

        [DataMember(Name = "total")]
        public ulong Total { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RecofrienderContactPaginationResource {\n");
            sb.Append("  Cached: ").Append(Cached).Append("\n");
            sb.Append("  Count: ").Append(Count).Append("\n");
            sb.Append("  Limit: ").Append(Limit).Append("\n");
            sb.Append("  More: ").Append(More).Append("\n");
            sb.Append("  Start: ").Append(Start).Append("\n");
            sb.Append("  Total: ").Append(Total).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}