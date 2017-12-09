using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameflowPatcherProductState
    {
        [DataMember(Name = "action")]
        public LolGameflowPatcherProductStateAction Action { get; set; }

        [DataMember(Name = "isCorrupted")]
        public bool IsCorrupted { get; set; }

        [DataMember(Name = "isStopped")]
        public bool IsStopped { get; set; }

        [DataMember(Name = "isUpToDate")]
        public bool IsUpToDate { get; set; }

        [DataMember(Name = "isUpdateAvailable")]
        public bool IsUpdateAvailable { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowPatcherProductState {\n");
            sb.Append("  Action: ").Append(Action).Append("\n");
            sb.Append("  IsCorrupted: ").Append(IsCorrupted).Append("\n");
            sb.Append("  IsStopped: ").Append(IsStopped).Append("\n");
            sb.Append("  IsUpToDate: ").Append(IsUpToDate).Append("\n");
            sb.Append("  IsUpdateAvailable: ").Append(IsUpdateAvailable).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}