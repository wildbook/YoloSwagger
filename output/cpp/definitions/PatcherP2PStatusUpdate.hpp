#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherP2PStatusUpdate_t {
    bool isAllowedByUser;
  };

  inline void to_json(nlohmann::json& j, const PatcherP2PStatusUpdate_t& v) {
    j["isAllowedByUser"] = v.isAllowedByUser;
  }

  inline void from_json(const nlohmann::json& j, PatcherP2PStatusUpdate_t& v) {
    v.isAllowedByUser = j.at("isAllowedByUser").get<bool>();
  }
  inline std::string to_string(const PatcherP2PStatusUpdate_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
