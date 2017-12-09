using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct EndOfGameLcdsSpell
    {
        [DataMember(Name = "spellId")]
        public int SpellId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EndOfGameLcdsSpell {\n");
            sb.Append("  SpellId: ").Append(SpellId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}