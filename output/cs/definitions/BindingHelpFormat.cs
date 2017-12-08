using System.Runtime.Serialization;
namespace leagueapi {
  // Help format for binding functions and types.
  [DataContract]  enum BindingHelpFormat {
    // Native help format
    [DataMember(Name = "Full")]
    Full = 1,

    // Python epytext format
    [DataMember(Name = "Epytext")]
    Epytext = 2,

  }
}