using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsSummonerData
    {
        [DataMember(Name = "masteryBook")]
        public CollectionsLcdsMasteryBookDTO MasteryBook { get; set; }

        [DataMember(Name = "spellBook")]
        public CollectionsLcdsSpellBookDTO SpellBook { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsSummonerData {\n");
            sb.Append("  MasteryBook: ").Append(MasteryBook).Append("\n");
            sb.Append("  SpellBook: ").Append(SpellBook).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}