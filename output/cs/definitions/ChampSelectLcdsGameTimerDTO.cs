using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ChampSelectLcdsGameTimerDTO
    {
        [DataMember(Name = "currentGameState")]
        public string CurrentGameState { get; set; }

        [DataMember(Name = "remainingTimeInMillis")]
        public double RemainingTimeInMillis { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectLcdsGameTimerDTO {\n");
            sb.Append("  CurrentGameState: ").Append(CurrentGameState).Append("\n");
            sb.Append("  RemainingTimeInMillis: ").Append(RemainingTimeInMillis).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}