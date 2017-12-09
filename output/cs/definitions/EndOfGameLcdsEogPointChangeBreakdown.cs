using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct EndOfGameLcdsEogPointChangeBreakdown
    {
        [DataMember(Name = "endPoints")]
        public int EndPoints { get; set; }

        [DataMember(Name = "pointChangeFromChampionsOwned")]
        public int PointChangeFromChampionsOwned { get; set; }

        [DataMember(Name = "pointChangeFromGameplay")]
        public int PointChangeFromGameplay { get; set; }

        [DataMember(Name = "pointsUsed")]
        public int PointsUsed { get; set; }

        [DataMember(Name = "previousPoints")]
        public int PreviousPoints { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EndOfGameLcdsEogPointChangeBreakdown {\n");
            sb.Append("  EndPoints: ").Append(EndPoints).Append("\n");
            sb.Append("  PointChangeFromChampionsOwned: ").Append(PointChangeFromChampionsOwned).Append("\n");
            sb.Append("  PointChangeFromGameplay: ").Append(PointChangeFromGameplay).Append("\n");
            sb.Append("  PointsUsed: ").Append(PointsUsed).Append("\n");
            sb.Append("  PreviousPoints: ").Append(PreviousPoints).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}