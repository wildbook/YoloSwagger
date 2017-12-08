#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameflowQueueGameCategory_t {
    VersusAi_E = 3,
    PvP_E = 2,
    None_E = 0,
    Custom_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueGameCategory_t& v) {
    switch(v) {
      case LolGameflowQueueGameCategory_t::VersusAi_E:
        j = "VersusAi";
      break;
      case LolGameflowQueueGameCategory_t::PvP_E:
        j = "PvP";
      break;
      case LolGameflowQueueGameCategory_t::None_E:
        j = "None";
      break;
      case LolGameflowQueueGameCategory_t::Custom_E:
        j = "Custom";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueueGameCategory_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "VersusAi"){
      v = LolGameflowQueueGameCategory_t::VersusAi_E;
      return;
    }
    if(s == "PvP"){
      v = LolGameflowQueueGameCategory_t::PvP_E;
      return;
    }
    if(s == "None"){
      v = LolGameflowQueueGameCategory_t::None_E;
      return;
    }
    if(s == "Custom"){
      v = LolGameflowQueueGameCategory_t::Custom_E;
      return;
    }
  }
  inline std::string to_string(const LolGameflowQueueGameCategory_t& v) {
    switch(v) {
      case LolGameflowQueueGameCategory_t::VersusAi_E:
        return "VersusAi";
      case LolGameflowQueueGameCategory_t::PvP_E:
        return "PvP";
      case LolGameflowQueueGameCategory_t::None_E:
        return "None";
      case LolGameflowQueueGameCategory_t::Custom_E:
        return "Custom";
    }
  }

}
