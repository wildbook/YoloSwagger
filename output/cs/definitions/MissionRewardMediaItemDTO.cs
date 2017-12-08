using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MissionRewardMediaItemDTO
    {
        [DataMember(Name = "sound")]
        string Sound { get; set; }

        [DataMember(Name = "video")]
        string Video { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MissionRewardMediaItemDTO {\n");
            sb.Append("  Sound: ").Append(Sound).Append("\n");
            sb.Append("  Video: ").Append(Video).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}