#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameQueuesQueueGameCategory_t {
    VersusAi_E = 3,
    None_E = 0,
    PvP_E = 2,
    Custom_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueGameCategory_t& v) {
    switch(v) {
      case LolGameQueuesQueueGameCategory_t::VersusAi_E:
        j = "VersusAi";
      break;
      case LolGameQueuesQueueGameCategory_t::None_E:
        j = "None";
      break;
      case LolGameQueuesQueueGameCategory_t::PvP_E:
        j = "PvP";
      break;
      case LolGameQueuesQueueGameCategory_t::Custom_E:
        j = "Custom";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueGameCategory_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "VersusAi"){
      v = LolGameQueuesQueueGameCategory_t::VersusAi_E;
      return;
    }
    if(s == "None"){
      v = LolGameQueuesQueueGameCategory_t::None_E;
      return;
    }
    if(s == "PvP"){
      v = LolGameQueuesQueueGameCategory_t::PvP_E;
      return;
    }
    if(s == "Custom"){
      v = LolGameQueuesQueueGameCategory_t::Custom_E;
      return;
    }
  }
  inline std::string to_string(const LolGameQueuesQueueGameCategory_t& v) {
    switch(v) {
      case LolGameQueuesQueueGameCategory_t::VersusAi_E:
        return "VersusAi";
      case LolGameQueuesQueueGameCategory_t::None_E:
        return "None";
      case LolGameQueuesQueueGameCategory_t::PvP_E:
        return "PvP";
      case LolGameQueuesQueueGameCategory_t::Custom_E:
        return "Custom";
    }
  }

}
