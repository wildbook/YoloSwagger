#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameflowQueueGameCategory_t {
    Custom_E = 1,
    None_E = 0,
    PvP_E = 2,
    VersusAi_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueueGameCategory_t& v) {
    switch(v) {
      case LolGameflowQueueGameCategory_t::Custom_E:
        j = "Custom";
      break;
      case LolGameflowQueueGameCategory_t::None_E:
        j = "None";
      break;
      case LolGameflowQueueGameCategory_t::PvP_E:
        j = "PvP";
      break;
      case LolGameflowQueueGameCategory_t::VersusAi_E:
        j = "VersusAi";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueueGameCategory_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Custom"){
      v = LolGameflowQueueGameCategory_t::Custom_E;
      return;
    }
    if(s == "None"){
      v = LolGameflowQueueGameCategory_t::None_E;
      return;
    }
    if(s == "PvP"){
      v = LolGameflowQueueGameCategory_t::PvP_E;
      return;
    }
    if(s == "VersusAi"){
      v = LolGameflowQueueGameCategory_t::VersusAi_E;
      return;
    }
  }
}
