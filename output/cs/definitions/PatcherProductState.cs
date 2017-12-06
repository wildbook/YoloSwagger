using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PatcherProductState
    {
        [DataMember(Name = "action")]
        PatcherComponentStateAction Action { get; set; }

        [DataMember(Name = "components")]
        PatcherComponentState[] Components { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "isCorrupted")]
        bool IsCorrupted { get; set; }

        [DataMember(Name = "isStopped")]
        bool IsStopped { get; set; }

        [DataMember(Name = "isUpToDate")]
        bool IsUpToDate { get; set; }

        [DataMember(Name = "isUpdateAvailable")]
        bool IsUpdateAvailable { get; set; }

        [DataMember(Name = "percentPatched")]
        double PercentPatched { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherProductState {\n");
            sb.Append("  Action: ").Append(Action).Append("\n");
            sb.Append("  Components: ").Append(Components).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsCorrupted: ").Append(IsCorrupted).Append("\n");
            sb.Append("  IsStopped: ").Append(IsStopped).Append("\n");
            sb.Append("  IsUpToDate: ").Append(IsUpToDate).Append("\n");
            sb.Append("  IsUpdateAvailable: ").Append(IsUpdateAvailable).Append("\n");
            sb.Append("  PercentPatched: ").Append(PercentPatched).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}