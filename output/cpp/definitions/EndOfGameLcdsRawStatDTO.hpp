#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EndOfGameLcdsRawStatDTO_t {
    int64_t_t value;
    std::string_t statTypeName;
  };

  inline void to_json(nlohmann::json& j, const EndOfGameLcdsRawStatDTO_t& v) {
    j["value"] = v.value;
    j["statTypeName"] = v.statTypeName;
  }

  inline void from_json(const nlohmann::json& j, EndOfGameLcdsRawStatDTO_t& v) {
    v.value = j.at("value").get<int64_t_t>();
    v.statTypeName = j.at("statTypeName").get<std::string_t>();
  }
  inline std::string to_string(const EndOfGameLcdsRawStatDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
