#pragma once
#include <json.hpp>
#include <optional>
#include "RecofrienderFriendState.hpp"
namespace leagueapi {
  struct RecofrienderContactResource_t {
    std::string source;
    std::string name;
    std::string displayState;
    std::string imageUrl;
    uint64_t accountId;
    RecofrienderFriendState_t friendState;
    uint64_t summonerId;
    int64_t recommendScore;
    std::string action;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactResource_t& v) {
    j["source"] = v.source;
    j["name"] = v.name;
    j["displayState"] = v.displayState;
    j["imageUrl"] = v.imageUrl;
    j["accountId"] = v.accountId;
    j["friendState"] = v.friendState;
    j["summonerId"] = v.summonerId;
    j["recommendScore"] = v.recommendScore;
    j["action"] = v.action;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactResource_t& v) {
    v.source = j.at("source").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.displayState = j.at("displayState").get<std::string>();
    v.imageUrl = j.at("imageUrl").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.friendState = j.at("friendState").get<RecofrienderFriendState_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.recommendScore = j.at("recommendScore").get<int64_t>();
    v.action = j.at("action").get<std::string>();
  }
}
