using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolGameflowPatcherProductState
    {
        [DataMember(Name = "action")]
        LolGameflowPatcherProductStateAction Action { get; set; }

        [DataMember(Name = "isStopped")]
        bool IsStopped { get; set; }

        [DataMember(Name = "isUpToDate")]
        bool IsUpToDate { get; set; }

        [DataMember(Name = "isUpdateAvailable")]
        bool IsUpdateAvailable { get; set; }

        [DataMember(Name = "isCorrupted")]
        bool IsCorrupted { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowPatcherProductState {\n");
            sb.Append("  Action: ").Append(Action).Append("\n");
            sb.Append("  IsStopped: ").Append(IsStopped).Append("\n");
            sb.Append("  IsUpToDate: ").Append(IsUpToDate).Append("\n");
            sb.Append("  IsUpdateAvailable: ").Append(IsUpdateAvailable).Append("\n");
            sb.Append("  IsCorrupted: ").Append(IsCorrupted).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}