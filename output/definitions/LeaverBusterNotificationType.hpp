#ifndef SWAGGER_TYPES_LeaverBusterNotificationType_HPP
#define SWAGGER_TYPES_LeaverBusterNotificationType_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LeaverBusterNotificationType {
    // 
    Invalid = 0,
    // 
    PunishedGamesRemaining = 3,
    // 
    PunishmentIncurred = 2,
    // 
    Reforming = 4,
    // 
    TaintedWarning = 1,
  };

  void to_json(nlohmann::json& j, const LeaverBusterNotificationType& v) {
    switch(v) {
      case LeaverBusterNotificationType::Invalid:
        j = "Invalid";
      break;
      case LeaverBusterNotificationType::PunishedGamesRemaining:
        j = "PunishedGamesRemaining";
      break;
      case LeaverBusterNotificationType::PunishmentIncurred:
        j = "PunishmentIncurred";
      break;
      case LeaverBusterNotificationType::Reforming:
        j = "Reforming";
      break;
      case LeaverBusterNotificationType::TaintedWarning:
        j = "TaintedWarning";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LeaverBusterNotificationType& v) {
    const auto s& = j.get<std::string>();
    if(s == "Invalid"){
      v = LeaverBusterNotificationType::Invalid;
      return;
    }
    if(s == "PunishedGamesRemaining"){
      v = LeaverBusterNotificationType::PunishedGamesRemaining;
      return;
    }
    if(s == "PunishmentIncurred"){
      v = LeaverBusterNotificationType::PunishmentIncurred;
      return;
    }
    if(s == "Reforming"){
      v = LeaverBusterNotificationType::Reforming;
      return;
    }
    if(s == "TaintedWarning"){
      v = LeaverBusterNotificationType::TaintedWarning;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LeaverBusterNotificationType_HPP
