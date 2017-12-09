using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolHonorV2FullTeamVote
    {
        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2FullTeamVote {\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}