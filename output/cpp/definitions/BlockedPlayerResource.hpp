#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct BlockedPlayerResource_t {
    uint64_t id;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const BlockedPlayerResource_t& v) {
    j["id"] = v.id;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BlockedPlayerResource_t& v) {
    v.id = j.at("id").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
  }
}
