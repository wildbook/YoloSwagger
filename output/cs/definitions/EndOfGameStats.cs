using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct EndOfGameStats
    {
        [DataMember(Name = "timeUntilNextFirstWinBonus")]
        public ulong TimeUntilNextFirstWinBonus { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EndOfGameStats {\n");
            sb.Append("  TimeUntilNextFirstWinBonus: ").Append(TimeUntilNextFirstWinBonus).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}