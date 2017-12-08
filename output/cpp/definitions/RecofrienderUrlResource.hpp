#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderUrlResource_t {
    std::string_t url;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderUrlResource_t& v) {
    j["url"] = v.url;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderUrlResource_t& v) {
    v.url = j.at("url").get<std::string_t>();
  }
  inline std::string to_string(const RecofrienderUrlResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
