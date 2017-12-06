#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PickModes_t {
    DONE_E = 2,
    IN_PROGRESS_E = 1,
    NOT_PICKING_E = 0,
  };

  inline void to_json(nlohmann::json& j, const PickModes_t& v) {
    switch(v) {
      case PickModes_t::DONE_E:
        j = "DONE";
      break;
      case PickModes_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case PickModes_t::NOT_PICKING_E:
        j = "NOT_PICKING";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PickModes_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "DONE"){
      v = PickModes_t::DONE_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = PickModes_t::IN_PROGRESS_E;
      return;
    }
    if(s == "NOT_PICKING"){
      v = PickModes_t::NOT_PICKING_E;
      return;
    }
  }
}
