using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct RecentGames
    {
        [DataMember(Name = "gameStatistics")]
        PlayerGameStats[] GameStatistics { get; set; }

        [DataMember(Name = "userId")]
        ulong UserId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RecentGames {\n");
            sb.Append("  GameStatistics: ").Append(GameStatistics).Append("\n");
            sb.Append("  UserId: ").Append(UserId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}