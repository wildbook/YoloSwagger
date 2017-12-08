using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MissionProgressDTO
    {
        [DataMember(Name = "totalCount")]
        int TotalCount { get; set; }

        [DataMember(Name = "lastViewedProgress")]
        int LastViewedProgress { get; set; }

        [DataMember(Name = "currentProgress")]
        int CurrentProgress { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MissionProgressDTO {\n");
            sb.Append("  TotalCount: ").Append(TotalCount).Append("\n");
            sb.Append("  LastViewedProgress: ").Append(LastViewedProgress).Append("\n");
            sb.Append("  CurrentProgress: ").Append(CurrentProgress).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}