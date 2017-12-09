using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryPlayerChampMasteryDelta
    {
        [DataMember(Name = "grade")]
        public string Grade { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryPlayerChampMasteryDelta {\n");
            sb.Append("  Grade: ").Append(Grade).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}