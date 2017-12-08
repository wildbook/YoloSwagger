#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class PickModes_t {
    NOT_PICKING_E = 0,
    IN_PROGRESS_E = 1,
    DONE_E = 2,
  };

  inline void to_json(nlohmann::json& j, const PickModes_t& v) {
    switch(v) {
      case PickModes_t::NOT_PICKING_E:
        j = "NOT_PICKING";
      break;
      case PickModes_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case PickModes_t::DONE_E:
        j = "DONE";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, PickModes_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "NOT_PICKING"){
      v = PickModes_t::NOT_PICKING_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = PickModes_t::IN_PROGRESS_E;
      return;
    }
    if(s == "DONE"){
      v = PickModes_t::DONE_E;
      return;
    }
  }
  inline std::string to_string(const PickModes_t& v) {
    switch(v) {
      case PickModes_t::NOT_PICKING_E:
        return "NOT_PICKING";
      case PickModes_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case PickModes_t::DONE_E:
        return "DONE";
    }
  }

}
