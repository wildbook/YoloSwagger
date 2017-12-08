using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolHonorV2VoteCompletion
    {
        [DataMember(Name = "gameId")]
        ulong GameId { get; set; }

        [DataMember(Name = "fullTeamVote")]
        bool FullTeamVote { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolHonorV2VoteCompletion {\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  FullTeamVote: ").Append(FullTeamVote).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}