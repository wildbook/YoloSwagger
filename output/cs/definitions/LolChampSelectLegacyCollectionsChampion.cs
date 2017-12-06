using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampSelectLegacyCollectionsChampion
    {
        [DataMember(Name = "freeToPlay")]
        bool FreeToPlay { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "ownership")]
        LolChampSelectLegacyCollectionsOwnership Ownership { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampSelectLegacyCollectionsChampion {\n");
            sb.Append("  FreeToPlay: ").Append(FreeToPlay).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Ownership: ").Append(Ownership).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}