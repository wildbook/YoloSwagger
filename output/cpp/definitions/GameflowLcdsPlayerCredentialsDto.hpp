#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct GameflowLcdsPlayerCredentialsDto_t {
    std::string serverIp;
    std::string observerServerIp;
    std::string observerEncryptionKey;
    std::string encryptionKey;
    uint16_t observerServerPort;
    uint64_t gameId;
    uint64_t summonerId;
    bool observer;
    uint16_t serverPort;
  };

  inline void to_json(nlohmann::json& j, const GameflowLcdsPlayerCredentialsDto_t& v) {
    j["serverIp"] = v.serverIp;
    j["observerServerIp"] = v.observerServerIp;
    j["observerEncryptionKey"] = v.observerEncryptionKey;
    j["encryptionKey"] = v.encryptionKey;
    j["observerServerPort"] = v.observerServerPort;
    j["gameId"] = v.gameId;
    j["summonerId"] = v.summonerId;
    j["observer"] = v.observer;
    j["serverPort"] = v.serverPort;
  }

  inline void from_json(const nlohmann::json& j, GameflowLcdsPlayerCredentialsDto_t& v) {
    v.serverIp = j.at("serverIp").get<std::string>();
    v.observerServerIp = j.at("observerServerIp").get<std::string>();
    v.observerEncryptionKey = j.at("observerEncryptionKey").get<std::string>();
    v.encryptionKey = j.at("encryptionKey").get<std::string>();
    v.observerServerPort = j.at("observerServerPort").get<uint16_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.observer = j.at("observer").get<bool>();
    v.serverPort = j.at("serverPort").get<uint16_t>();
  }
}
