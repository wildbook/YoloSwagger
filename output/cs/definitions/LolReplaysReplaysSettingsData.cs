using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolReplaysReplaysSettingsData
    {
        [DataMember(Name = "highlights-folder-path")]
        public string HighlightsFolderPath { get; set; }

        [DataMember(Name = "replays-folder-path")]
        public string ReplaysFolderPath { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolReplaysReplaysSettingsData {\n");
            sb.Append("  HighlightsFolderPath: ").Append(HighlightsFolderPath).Append("\n");
            sb.Append("  ReplaysFolderPath: ").Append(ReplaysFolderPath).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}