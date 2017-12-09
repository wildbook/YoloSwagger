using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashMatchmakingSearchResource
    {
        [DataMember(Name = "dodgeData")]
        public LolClashMatchmakingDodgeData DodgeData { get; set; }

        [DataMember(Name = "queueId")]
        public int QueueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashMatchmakingSearchResource {\n");
            sb.Append("  DodgeData: ").Append(DodgeData).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}