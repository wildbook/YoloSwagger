#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsRawStatDTO_t {
    std::string statTypeName;
    int64_t value;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsRawStatDTO_t& v) {
    j["statTypeName"] = v.statTypeName;
    j["value"] = v.value;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsRawStatDTO_t& v) {
    v.statTypeName = j.at("statTypeName").get<std::string>();
    v.value = j.at("value").get<int64_t>();
  }
}
