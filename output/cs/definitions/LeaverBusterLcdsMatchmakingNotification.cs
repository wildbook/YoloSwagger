using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LeaverBusterLcdsMatchmakingNotification
    {
        [DataMember(Name = "playerJoinFailures")]
        public dynamic[] PlayerJoinFailures { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LeaverBusterLcdsMatchmakingNotification {\n");
            sb.Append("  PlayerJoinFailures: ").Append(PlayerJoinFailures).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}