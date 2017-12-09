using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MissionProgressDTO
    {
        [DataMember(Name = "currentProgress")]
        public int CurrentProgress { get; set; }

        [DataMember(Name = "lastViewedProgress")]
        public int LastViewedProgress { get; set; }

        [DataMember(Name = "totalCount")]
        public int TotalCount { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MissionProgressDTO {\n");
            sb.Append("  CurrentProgress: ").Append(CurrentProgress).Append("\n");
            sb.Append("  LastViewedProgress: ").Append(LastViewedProgress).Append("\n");
            sb.Append("  TotalCount: ").Append(TotalCount).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}