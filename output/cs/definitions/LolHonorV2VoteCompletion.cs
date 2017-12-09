using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolHonorV2VoteCompletion
    {
        [DataMember(Name = "fullTeamVote")]
        public bool FullTeamVote { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2VoteCompletion {\n");
            sb.Append("  FullTeamVote: ").Append(FullTeamVote).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}