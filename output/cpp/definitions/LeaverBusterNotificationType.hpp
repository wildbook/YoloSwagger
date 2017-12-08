#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LeaverBusterNotificationType_t {
    PunishmentIncurred_E = 2,
    Invalid_E = 0,
    TaintedWarning_E = 1,
    Reforming_E = 4,
    PunishedGamesRemaining_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LeaverBusterNotificationType_t& v) {
    switch(v) {
      case LeaverBusterNotificationType_t::PunishmentIncurred_E:
        j = "PunishmentIncurred";
      break;
      case LeaverBusterNotificationType_t::Invalid_E:
        j = "Invalid";
      break;
      case LeaverBusterNotificationType_t::TaintedWarning_E:
        j = "TaintedWarning";
      break;
      case LeaverBusterNotificationType_t::Reforming_E:
        j = "Reforming";
      break;
      case LeaverBusterNotificationType_t::PunishedGamesRemaining_E:
        j = "PunishedGamesRemaining";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LeaverBusterNotificationType_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "PunishmentIncurred"){
      v = LeaverBusterNotificationType_t::PunishmentIncurred_E;
      return;
    }
    if(s == "Invalid"){
      v = LeaverBusterNotificationType_t::Invalid_E;
      return;
    }
    if(s == "TaintedWarning"){
      v = LeaverBusterNotificationType_t::TaintedWarning_E;
      return;
    }
    if(s == "Reforming"){
      v = LeaverBusterNotificationType_t::Reforming_E;
      return;
    }
    if(s == "PunishedGamesRemaining"){
      v = LeaverBusterNotificationType_t::PunishedGamesRemaining_E;
      return;
    }
  }
  inline std::string to_string(const LeaverBusterNotificationType_t& v) {
    switch(v) {
      case LeaverBusterNotificationType_t::PunishmentIncurred_E:
        return "PunishmentIncurred";
      case LeaverBusterNotificationType_t::Invalid_E:
        return "Invalid";
      case LeaverBusterNotificationType_t::TaintedWarning_E:
        return "TaintedWarning";
      case LeaverBusterNotificationType_t::Reforming_E:
        return "Reforming";
      case LeaverBusterNotificationType_t::PunishedGamesRemaining_E:
        return "PunishedGamesRemaining";
    }
  }

}
