#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct MultipleReplayMetadataRequestV2_t {
    std::string_t platformId;
    std::vector<uint64_t> gameIds;
  };

  inline void to_json(nlohmann::json& j, const MultipleReplayMetadataRequestV2_t& v) {
    j["platformId"] = v.platformId;
    j["gameIds"] = v.gameIds;
  }

  inline void from_json(const nlohmann::json& j, MultipleReplayMetadataRequestV2_t& v) {
    v.platformId = j.at("platformId").get<std::string_t>();
    v.gameIds = j.at("gameIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const MultipleReplayMetadataRequestV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
