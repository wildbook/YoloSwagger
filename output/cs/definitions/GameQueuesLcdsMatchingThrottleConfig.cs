using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct GameQueuesLcdsMatchingThrottleConfig
    {
        [DataMember(Name = "cacheName")]
        public string CacheName { get; set; }

        [DataMember(Name = "limit")]
        public long Limit { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GameQueuesLcdsMatchingThrottleConfig {\n");
            sb.Append("  CacheName: ").Append(CacheName).Append("\n");
            sb.Append("  Limit: ").Append(Limit).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}